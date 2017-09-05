#include "mpi.h"
#include "string.h"
#include "sys/stat.h"
#include "memory.h"
#include "io.h"
#include "stdio.h"
#include "stdlib.h"
#include "process.h"
#include "direct.h"

#define uchar unsigned char
#define uint unsigned int

//消息类型标签
#define DICT_SIZE_MSG 0    // 字典大小标签
#define FILE_NAME_MSG 1    // 文档名字标签
#define VECTOR_MSG 2    // 特征向量标签
#define EMPTY_MSG 3    // 空消息标签

//参数类型标签
#define DIR_ARG 1    // 路径参数
#define DICT_ARG 2    // 字典参数
#define RES_ARG 3    // 结果参数

#define HASH_SIZE 100

// 链地址法解决哈希码冲突

int matrix[5][5] = { 0 };

int main(int argc, char *argv[])
{
}
