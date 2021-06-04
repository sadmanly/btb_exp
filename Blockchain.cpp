#include"Blockchain.h"
Blockchain::Blockchain()
{
	_vChain.emplace_back(Block(0, "Genesis Block"));
	
	_nDifficulty = 4;//难度值设置3基本上秒出结果，4可以看出差距，5大约要等2分钟左右。
}
void Blockchain::AddBlock(Block bNew)
{
	bNew.sPrevHash = _GetLastBlock().GetHash();
	bNew.MineBlock(_nDifficulty);
	_vChain.push_back(bNew);
	bNew.WriteBlcokToTXT();//调用区块类中的写文件方法
}
 
Block Blockchain::_GetLastBlock() const
{
	return _vChain.back();
}

Blockchain::~Blockchain()
{



}