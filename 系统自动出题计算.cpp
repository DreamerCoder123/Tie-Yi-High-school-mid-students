//Very fucking easy,isn't it?
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;
int choices = 0;
bool muti_players = false;
int length = 0;
int numbers[10];
char ops[10];
int max_Round = 0;
int score[2] = {0}, all[2] = {0}; //����洢Player 1,player 2��data
int current_player = 1;//�洢�����Ǽ������
int result_man[2];
int result_robot[2];
clock_t time_start, time_end, time_used[2];
char full_op[3] = {'+', '-', '*'};
void output() {
	cout << "Current Player:" << current_player << endl;
	for (int i = 0; i < length; i++) {
		cout << numbers[i] << ops[i];
	}//output the text
}
int calc(int a, char op, int b) {
	switch (op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
	}
	return 0;
	//�������㺯��
}
void summon_a_text_and_get_man_answer() {
	for (int i = 0; i < length; i++) {
		numbers[i] = rand() % max_Round + 1;
		ops[i] = full_op[rand() % 3];
	}//summon the text
	ops[length - 1] = '='; //Let the last of the text be '='
	output();
	time_start = clock();
	cin >> result_man[current_player - 1];
}
void final_calc() {
	for (int i = 0; i < length; i++) {
		//find '*' in every array
		if (ops[i] == '*') {
			numbers[i + 1] = calc(numbers[i], '*', numbers[i + 1]);
			numbers[i] = 0;
			ops[i] = '+';
		}
	}//�������齫���Ϊֻ��+��-��ģʽ
	for (int i = 0; i < length - 1; i++) {
		numbers[0] = calc(numbers[0], ops[i], numbers[i + 1]);
	}
	result_robot[current_player - 1] = numbers[0];
}
void verify() {
	if (result_man[current_player - 1] == result_robot[current_player - 1]) {
		system("color 2");
		cout << "You did it very well" << endl;
	} else {
		system("color 4");
		cout << "Whoa you fucked it up!" << endl;
	}
	if (result_man[current_player - 1] == result_robot[current_player - 1] && !muti_players) {
		score[current_player - 1]++;
	}
	all[current_player - 1]++;
	time_end = clock();
	time_used[current_player - 1] = time_end - time_start;
	cout << "used " << (time_end - time_start) * 1.0 / 1000 << " second to finish the exam" << endl;
	printf("Score:%i\nTotal:%i", score[current_player - 1], all[current_player - 1]);
	Sleep(1000);
	system("color 7");
	system("cls");
	if (muti_players == true) {
		current_player++;
	}
}
void changeAllCharsInto(char convert) {
	for (int i = 0; i < 3; i++) {
		full_op[i] = convert;
	}
}
int main() {
	printf("��ӭVan You Xi,��ѡ���Ѷ�\n1.+ only\n2.* only\n3.- only\n4.mix\n5.Exit\n6.muti-player\nPlease enter:");
	int choose = 0;
	cin >> choose;
	system("cls");
	char loading[] = "���ڼ�����.....";
	for (int i = 0; i < 10; i++) {
		cout << loading[i];
		Sleep(100);
	}
	system("cls");
	while (true) {

		if (length == 0) {
			cout << "�������м�����" << endl;
			cin >> length;
			if (length > 10) {
				cout << "�벻Ҫ�������10������ϵͳ����������Զ��˳�" << endl;
				Sleep(3000);
				return 0;
			}
		}
		if (max_Round == 0) {
			cout << "��������������������Ƕ���" << endl;
			cin >> max_Round;
		}
		switch (choose) {
			case 1:
				changeAllCharsInto('+');
				muti_players = false;
				break;
			case 2:
				changeAllCharsInto('*');
				muti_players = false;
				break;
			case 3:
				changeAllCharsInto('-');
				muti_players = false;
				break;
			case 6:
				if (muti_players == false) {
					system("cls");//�����Ļ
					printf("Please enter mode(muti_player)\n1.+ only\n2.- only\n3.*only\n4.mix");
					cin >> choices;
					switch (choices) {
						case 1:
							changeAllCharsInto('+');
							break;
						case 2:
							changeAllCharsInto('-');
							break;
						case 3:
							changeAllCharsInto('*');
							break;
					}
				}
				muti_players = true;
				break;
			case 5:
				return 0;
		}
		if (muti_players == true && current_player == 3) {
			current_player = 1;
			/*1.�ж϶Դ�
			2.�Ƚ�ʱ��*/
			if (result_man[0] == result_robot[0] && result_man[1] == result_robot[1]) {
				//ȫ����ȷ �Ƚ�ʱ��
				if (time_used[0] > time_used[1]) {
					cout << "Player 2 win this round";
					score[1]++;
				} else if (time_used[0] == time_used[1]) {
					cout << "tire!";
					score[0]++;
					score[1]++;
				} else {
					cout << "Player 1 win this round";
					score[0]++;
				}
			} else if (result_man[0] != result_robot[0] && result_man[1] != result_robot[1]) {
				//ȫ������
				cout << "No one win this round";
			} else {
				if (result_man[0] == result_robot[0]) {
					score[0]++;
					cout << "Player 1 win this round";
				}
				if (result_man[1] == result_robot[1]) {
					cout << "player 2 win this round";
					score[1]++;
				}
				//�ĸ���ȷ�͸������ҷ���+1
			}
			Sleep(1000);
			system("cls");
		}//�������ģʽ���ҵ�ǰ���Ϊ2�Ļ���ô�ͽ���ǰ�������Ϊ1
		if (score[current_player - 1] < 0)return 0;
		summon_a_text_and_get_man_answer();
		final_calc();
		verify();
	}
}
