#include<bits/stdc++.h>
using namespace std;
string Search_Missing_letters();//查找缺失的字母 
string Tidying_strings(string Missing_letters);//整理字母，去除0占位符 
string  Generate_final_password(string final_string);//字母转数字（最终结果） 
void Get_Password();
//DUCEETDECOUMESTPROATRIAMORI  LRP
const string command = "DULCEETDECORUMESTPROPATRIAMORI";

string morse_code= "";

int main(){
	while(true){
		cout<<"@@@@@战地魅影彩蛋摩斯码解密@@@@@"<<endl;
		morse_code = "";
		cout<<"输入你获取的摩斯码(morse_code)："<<endl;
		cin>>morse_code;
		cout<<"你输入的摩斯码为："<<morse_code<<endl;
	
		Get_Password();
		
		cout<<"=======本次解密已结束======="<<endl<<endl;
	}
	
	
}

//查找缺失的字母，结果中含有0占位符 
string Search_Missing_letters(){
	int j=0;
	string command_copy = command; 
	for(int i=0; i<morse_code.size(); i++){
		for(; j<command_copy.size(); j++){
			if(morse_code[i] == command_copy[j]){
				command_copy[j] = '0';
				j++;
				break;
			}
		}
	}
	return command_copy;
}

//整理字母，去除0占位符 
string Tidying_strings(string Missing_letters){
	string final_string = "";
	for(int i=0; i<Missing_letters.size(); i++){
		if(Missing_letters[i] != '0'){
			final_string += Missing_letters[i];
		}
	}
	return final_string;
}

//字母转数字（最终结果） 
string  Generate_final_password(string final_string){
	string final_password = "";
	string character = "";
	for(int i=0; i<final_string.size(); i++){
		if(final_string[i] == 'C' || final_string[i] == 'F'){
			character = "1";
		}else if(final_string[i] == 'D' || final_string[i] == 'O'){
			character = "2";
		}else if(final_string[i] == 'A' || final_string[i] == 'U'){
			character = "3";
		}else if(final_string[i] == 'R' || final_string[i] == 'Z'){
			character = "4";
		}else if(final_string[i] == 'B' || final_string[i] == 'I'){
			character = "5";
		}else if(final_string[i] == 'N' || final_string[i] == 'X'){
			character = "6";
		}else if(final_string[i] == 'E' || final_string[i] == 'L'){
			character = "7";
		}else if(final_string[i] == 'G' || final_string[i] == 'K'){
			character = "8";
		}else if(final_string[i] == 'M' || final_string[i] == 'S'){
			character = "9";
		}else if(final_string[i] == 'P' || final_string[i] == 'T'){
			character = "0";
		}
		final_password += character;
	} 
	return final_password;
}

void Get_Password(){
	string Missing_letters = Search_Missing_letters();
	string final_string = Tidying_strings(Missing_letters);
	string final_password = Generate_final_password(final_string);
	
	cout<<endl<<"$$$$$$$$$$========"<<endl;
	cout<<"解密结果："<<final_password<<endl;
	cout<<"$$$$$$$$$$========"<<endl;
}
