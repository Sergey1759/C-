#include <iostream>
#include <string>
 #include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double arr[10];
    double new_arr[10];
    int j = 0;
    int k = 0;
    double minimum,maximum;
    int lenght = 0;
cout<<"�������� ���i �������� :"<<endl<<endl;
cout<<"1.�����i������� ��������� ��i�, ������ ��� ����� i ���������� ����� � ���, ��i"<<endl;
cout<<"������������� ����� ����� (���. �����). ���������� ������� ������ �� �i���� 10"<<endl;
cout<<"e������i�."<<endl<<endl;
cout<<"2. ��� �������� ���i���i� - ������������ ����� �� ���������, ��� ������ ���i���i� -"<<endl;
cout<<"������ �������� i �i�i���. �������� ������� ������i���."<<endl<<endl;
cout<<"3. ������ ���� �� ������� ������� �������� �� ������� � ������� ��`����� ��������,"<<endl;
cout<<"� ����� ������� �����������."<<endl<<endl;
cout<<"���i��� 12:   �i���i ����� ���i, �� �� �������� ����i ��� �i��i 4."<<endl<<endl;
    for (int i = 0; i < 10; i++){
       cout<< "enter arr["<<i<<"] = "; cin>>arr[i]; cout<<endl;

    }
    system("cls");
    cout<<"start arr  [";
    for (int i = 0; i < 10; i++){
        if(i != 9){cout<<arr[i]<<",";} else{
            cout<<arr[i];
        }
    } cout<<"]"<<endl;

    for (int i = 0; i < 10; i++){
        double sqr = arr[i]*arr[i];
        if(sqr < 4){ new_arr[lenght] = arr[i]; lenght++;}
    }

cout<<"finish arr [";
    for (int i = 0; i < lenght; i++){
        if(i != lenght-1){cout<<new_arr[i]<<",";} else{
            cout<<new_arr[i];
        }
    } cout<<"]"<<endl;

    minimum = new_arr[0];
    maximum = new_arr[0];


    for (int i = 0; i < lenght; i++){
        if(new_arr[i] > maximum){ maximum = new_arr[i]; }
        if(new_arr[i] < minimum){ minimum = new_arr[i]; }
    }
    int kil_dod = 0;
    double sum_dod = 0;
    int kil_vid = 0;
    double dob_vid = 1;
    double ser_aref = 0;
    double zag_suma = 0;


    for (int i = 0; i < lenght; i++){
        if(new_arr[i] > 0){ kil_dod++; sum_dod+= new_arr[i]; }
        zag_suma += new_arr[i];
    }

    cout<<"minimum = "<<minimum<<" maximum = "<< maximum<< endl;

     for (int i = 0; i < lenght; i++){
        if(new_arr[i] < 0){ kil_vid++;}
    }
    if(kil_vid > 0) {
       dob_vid = 1;
       for (int i = 0; i < lenght; i++){
        if(new_arr[i] < 0){ dob_vid = dob_vid * new_arr[i];}
    }
    cout<<"kil_vid = "<<kil_vid<<" sum_vid = "<< dob_vid<< endl;
    } else {
    cout<<"kil_vid = "<<kil_vid<<" sum_vid = "<< " vidsytni"<< endl;
    }


    ser_aref = zag_suma/lenght;

    cout<<"kil_dod = "<<kil_dod<<" sum_dod = "<< sum_dod<< endl;

    cout<<"kil_elem = "<<lenght<<" ser_aref  = "<< ser_aref<< endl;
}
