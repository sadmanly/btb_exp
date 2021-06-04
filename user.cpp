#include"user.h"
string User::batchTX()
{
    ifstream myfile("300TXdata.txt");//读取txt文档中的300条交易数据
    string temp[300];
    int i = 0;
    if (!myfile.is_open())
    {
        cout << "未成功打开文件" << endl;
    }
    while (getline(myfile, temp[i++]))//将取出来的第一行放在数组中i的位置然后i++
    {
        //cout << temp[i++] << endl;
        getline(myfile, temp[i++]);//将取出来的下一行放在数组i后面的位置然后i++
        //cout << temp[i] << endl;
    }
 
    for (int i = 0; i < 300; i++)//这是一个伪默克尔树生成过程，为了便于实现，就这样写了。
    //实际上真的默克尔树生成也不难，暂时先这样吧。
    {
        stringstream ss;//该对象可以通过<<接收多个数据，保存到ss对象中，并通过str方法，将内容赋给一个string对象
        ss << temp[0] << temp[i];
        temp[0] = sha256(ss.str());
        //cout << temp[0] << endl;
    }
 
    myfile.close();
    return temp[0];
}
 
 