#include<iostream>
#include<string>
using namespace std;
#define MAX 1000 //最大人数，定义成宏方便以后修改最大容量
//菜单界面
void showMenu() 
{
	cout << "-------------------------" << endl;
	cout << "***** 1、新建联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "-------------------------" << endl;
}

struct Person
{
	string m_Name;
	int m_Sex;//1 male 2 female
	int m_Age;
	int m_Phone;
	string m_Address;
};
//通讯录结构体
struct AddressBooks
{
	Person PersonArray[MAX];
	int m_SizeOfPerson;
};

//添加联系人的函数，思路：如果联系人数量没到上限，增加联系人
void AddPerson(AddressBooks *abs)
{
	if (abs->m_SizeOfPerson == MAX)
	{
		cout << "通讯录容量已达到上限，无法添加！" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入联系人姓名："
	}
}
//显示联系人的函数
void ShowPerson()
{

}
//更改联系人的函数
void ChangePerson()
{

}
//删除联系人的函数
void DeletePerson()
{

}
//清空联系人的函数
void ClearPerson()
{

}
//查找联系人的函数
void FindPerson()
{

}

int main() 
{
	AddressBooks abs;
	abs.m_SizeOfPerson = 0;


	int select = 0;
	//用户命令选择
	while (true) 
	{
		//显示菜单
		showMenu();
		cin >> select;
		switch (select)
		{
			
		case 1://1、新建联系人
			break;
		case 2://2、显示联系人
			break;
		case 3://3、删除联系人
			break;
		case 4://4、查找联系人
			break;
		case 5://5、修改联系人
			break;
		case 6://6、清空联系人
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
}