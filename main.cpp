#include "Data.h"

int main()
{
	bool ret = false;

	// Step 1: ��ȡ����
	string filename = "c101.txt";
	Data data;
	ret = data.ReadData(filename);
	if (!ret){
		db_print(DB_ERROR, "��ȡ����ʧ�ܣ�\n");
		return 0;
	}
	db_print(DB_NORMAL, "vehicleNum: %d, capicity: %d, custNum: %d\n", data.vehicleNum, data.capicity, data.custNum);

	

}