#include <mpi.h>
#include <stdio.h>
using namespace std;          
#include <unistd.h>

int main(int argc, char *argv[]) {
	// 初始化MPI环境
	MPI_Init(NULL, NULL);

	// 调用一下方法得到所有可以工作的进程数
	int world_size;
	MPI_Comm_size(MPI_COMM_WORLD, &world_size);

	// 得到当前
	int world_rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

	// 得到当前进程的名字
	char processor_name[MPI_MAX_PROCESSOR_NAME];

	int name_len;

	MPI_Get_processor_name(processor_name, &name_len);

	printf("Hello World from processor %s, rank %d out of %d processors\n", processor_name, world_rank, world_size);

	while(1) {
		//sleep(1);
		usleep(100000);
	}


}