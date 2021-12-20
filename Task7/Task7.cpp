#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");


    string file1 = "file1.txt";
    string file2 = "file2.txt";

    string str1;
    string str2;
    string str3;
    string str4; 
    string str;
    

    ifstream fin;

    
    int j;
    int a;


    while(1)
    {
        int z = 0;
        cout << "Введите действие 1 расчет, 0 выыход: ";
        cin >> z;

        if( z != 1)
            break;


        cout << "Выберите файл или ввод текста: 1 - файл 1, 2 - файл 2, 3 - ввод текста с клавиатуры" << "\n";
        int f = 0;
        cin >> f;

        switch(f)
        {
            case 1:

            fin.open(file1);

                if (!fin.is_open())
                {
                    cout<<"Ошибка открытия файла"<<'\n';
                }
                else
                {
                    str = " ";
                    str2 = " ";

                    a = 0;
                    j = 0;

                    cout<<"Файл открыт"<<'\n';

                    while(!fin.eof())
                    {
                        str1 = " " ;
                        getline(fin, str1);
                        str += str1 + " ";            
                    }

                    cout<<str<<"\n";
                    cout<<"введите подстроку:"<<"\n";
                    cin>>str2;

                    for( j = str.find(str2, j++); j != string::npos; j = str.find(str2, j + 1))
                    {
                        cout<<"номер яйчейки вхождения: "<<j<<"\n";
                
                        if( j != -1 )
                        {
                            a++;
                        }
                    }

                    cout<<"количество вхождений: "<<a<<"\n";

                }

                fin.close();

                break;

            case 2:

            fin.open(file2);

                if (!fin.is_open())
                {
                    cout<<"Ошибка открытия файла"<<'\n';
                }
                else
                {
                    str = " ";
                    str2 = " ";

                    a = 0;
                    j = 0;

                    cout<<"Файл открыт"<<'\n';

                    while(!fin.eof())
                    {
                        str1 = " " ;
                        getline(fin, str1);
                        str += str1 + " ";            
                    }

                    cout<<str<<"\n";
                    cout<<"введите подстроку:"<<"\n";
                    cin>>str2;

                    for( j = str.find(str2, j++); j != string::npos; j = str.find(str2, j + 1))
                    {
                        cout<<"номер яйчейки вхождения: "<<j<<"\n";
                
                        if( j != -1 )
                        {
                            a++;
                        }
                    }

                    cout<<"количество вхождений: "<<a<<"\n";

                }

                fin.close();

                break;

            case 3:

            a = 0;
            j = 0;

            str3 = " ";
            str4 = " ";

            cout<<"введите строку: ";
            cin.ignore(32767, '\n');
            getline(cin,str3);
            
            cout<<"\n"<<str3<<"\n\n";

            cout<<"введите подстроку: ";
            getline(cin,str4);

            cout<<"\n"<<str4<<"\n\n";


            for( j = str3.find(str4, j++); j != string::npos; j = str3.find(str4, j + 1))
            {
                cout<<"номер яйчейки вхождения: "<<j<<"\n";
                
                if( j != -1 )
                {
                    a++;
                }
            }

            cout<<"количество вхождений: "<<a<<"\n";
            
                break;

            default:

                cout<<"Ошибка"<<"\n";
                 
            return 1;
        }

    }
    system("pause");
    return 0;
}
