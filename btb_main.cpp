#include"btb_main.h"

#include<iostream>
#include<cstdint>
#include"Blockchain.h"
#include"user.h"
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include"sha256.h"

using namespace std;
int main()
{
	srand((int)time(0));//随机数种子
	Blockchain bChain;//首先创建一个区块链
	User user[100];//创建100个用户

	int miner_id;
	for (int i = 0; i < 100000; i++)//十万次出块，记录出块速度
	{
		miner_id = rand() % 100;

		for (int j = 0; j < 100; j++)
		{
			user[j].uBlockchain = bChain;//把100个节点的区块链初始化。
		}
		//user[miner_id].uBlockchain = bChain;//对挖矿区块初始化
		
		printf("Mining block  %d...\n", i);
		user[miner_id].uBlockchain.AddBlock(Block(i, user[miner_id].batchTX()));
		
		bChain = user[miner_id].uBlockchain;
		printf("Miner ID is %d...\n", miner_id);
	}

}