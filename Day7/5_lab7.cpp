#include<iostream>
#include<fstream>
using namespace std;

// Create an File IO application for basic operation 
//    1:Write file:accept data from user and store in file
//    2:Read file:display line by line
//    3:copy data from one file into another file

void writefile(){
    cout<<"Write in this file"<<endl;
    string filename="myfile.txt";
    ofstream outfile(filename,ios::app);
    
    outfile<<"This is My Data i am writing into file "<<endl;
    outfile<<" This is Names of Students"<<endl;
    
    cout<<"Enter Name of Student:";
    string name;
    cin>>name;
    outfile<<name<<endl;
    outfile.close();
    cout<<"......writing Data into file Done......"<<endl;



}


void readFile()
{
    cout<<"Read data from File"<<endl;
    string filename="myfile.txt";
  
    ifstream inputfile(filename);
  
    string line;
    if(inputfile.fail())
    {
        cout<<" file not found:";
    }
   else{
    cout<<" Read from file:";
  

    while(getline(inputfile,line))
    {
     cout<<line<<endl;
    }



   }

  inputfile.close();

}

void readcpFile()
{
    cout<<"Read data from File"<<endl;
    string filename="copy.txt";
  
    ifstream inputfile(filename);
  
    string line;
    if(inputfile.fail())
    {
        cout<<" file not found:";
    }
   else{
    cout<<" Read from file:";
  

    while(getline(inputfile,line))
    {
     cout<<line<<endl;
    }

   }

  inputfile.close();
}



int main()
{
    ofstream file("copy.txt");

    
    cout<<"1:Write File \n2:Read File \n 3:Copy File \n4:Read Copy file \n0:Exit";

    int ch;
    do{

     cout<<"\nEnter Choice";
     cin>>ch;
        switch (ch)
        {
            case 1: writefile();
                break;
            case 2: readFile();
                break;
            
            
            case 3: {
                ifstream inFile("myfile.txt");
                ofstream outFile("copy.txt");

                if (!inFile) {
                    cout << "Source file not found!\n";
                    break;
                }
                char fileChar;
                while (inFile.get(fileChar)) {
                    outFile.put(fileChar);
                }
                inFile.close();
                outFile.close();
                cout << "File copied successfully!\n";
                break;
            }

            case 4:readcpFile();
                break;
 
            default:
                break;
  }
}while(ch!=0);


}

