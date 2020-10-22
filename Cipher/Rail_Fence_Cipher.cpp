#include <bits/stdc++.h> 
#include<string>
using namespace std;
void encryptMsg(char msg[], int key){
int msgLen = strlen(msg), i, j, k = -1, row = 0, col = 0; 
char railMatrix[key][msgLen]; for(i = 0; i < key; ++i) for(j = 0; j < msgLen; ++j) railMatrix[i][j] = '\n'; 
for(i = 0; i < msgLen; ++i){ railMatrix[row][col++] = msg[i]; if(row == 0 || row == key-1)
k= k * (-1);
row = row + k;
}
cout<<"Encrypted Message: "; 
for(i = 0; i < key; ++i) 
for(j = 0; j < msgLen; ++j) 
if(railMatrix[i][j] != '\n') 
cout<<railMatrix[i][j];
}
void decryptMsg(char enMsg[], int key){
int msgLen = strlen(enMsg), i, j, k = -1, row = 0, col = 0, m = 0; 
char railMatrix[key][msgLen]; 
for(i = 0; i < key; ++i) 
for(j = 0; j < msgLen; ++j)
railMatrix[i][j] = '\n'; 
for(i = 0; i < msgLen; ++i)
{ railMatrix[row][col++] = '*'; 
if(row == 0 || row == key-1)
k= k * (-1);
row = row + k;
}
for(i = 0; i < key; ++i) 
for(j = 0; j < msgLen; ++j) 
if(railMatrix[i][j] == '*') 
railMatrix[i][j] = enMsg[m++]; 
row = col = 0;
k = -1;
cout<<"Decrypted Message: "; 
for(i = 0; i < msgLen; ++i)
{ cout<<railMatrix[row][col++]; 
if(row == 0 || row == key-1)
k= k * (-1);
row = row + k;
}
}
int main() {
int i, key, choice; char message[50]; 
cout << "Enter a message to encrypt: ";
cin.get(message, 50);
cout<<"Enter key: "; cin>>key;
cin.ignore();
cout<<"Enter choice:-\n1.Encryption\n2.Decryption\n"; cin>>choice;
cin.ignore();
switch(choice){ case 1: encryptMsg(message,key);
cout<<endl; 
break;
case 2: decryptMsg(message,key);
cout<<endl; 
break;
default: cout<<"Wrong value selected!";
}
cout << "Made by:-" << endl<<"Rupesh : 20513203117"<< endl;
return 0;
}
