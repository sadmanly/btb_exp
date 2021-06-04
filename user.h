#pragma once
#include <iostream>//标准输入输出库
#include <vector> 
#include <string> 
#include <fstream>
#include<sstream>
#include "Blockchain.h"
#include "sha256.h"
using namespace std;
class User
{
public:
	Blockchain uBlockchain;//当前节点创建一个自己的区块链，因为每个用户都保存一条自己的区块链
	string batchTX();//打包交易
};