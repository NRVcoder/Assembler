#include<iostream>
using namespace std;
int main() {
	/*eax, ebx, ecx, edx - 32 бита(4 байта)
		ax, bx, cx, dx - 2 последних байта
		ah, bh, ch, dh - самый правый из двух байтов
		al, bl, cl, dl - левый из двух последних байтов*/
	//	int a = 5;
	//    int b = 4;
	//	int c = 3;
	//	int d;
	//__asm {
	//	mov eax, a //из а в регистр
	//	mov ebx, b
	//	mov ecx, c
	//	//add eax, ebx
	//	add eax, ebx// eax += ebx
	//	add eax, ecx
	//	mov d, eax//из регистра в с
	//}
	int d;
	cin >> d;
	int a = d;
	int b;
	int c;
	int y = 0;
	int g;
	__asm {
		//mov eax, a
		//sub eax, b
		//add eax, c
		//sub eax, d
		//mov y, eax//из регистра в операнд  (a - b + c - d);

		//mov eax, a
		//mov ebx, b
		//imul eax, b
		//imul ebx, c
		//add eax, ebx
		//mov y, eax // (a*b + b*c)

		//mov eax, 0
		//mov al, 257
		//mov c, eax// присвоить из еах в с

		//mov edx, 1
		//mov eax, 0
		//mov ebx, 3
		//idiv ebx
		//mov a, eax //целая часть от деления
		//mov d, edx// остаток от деления
		//myend:
		//mov a, eax// присвоили а значение еах


		/*mov eax, 3
		mov ebx, 3
		cmp eax, ebx
		je is_equal //проверить на равенство
		mov a, 0
		jmp my_end
			is_equal:
		mov a, 1
			my_end:
		nop
	*/
		//mov eax, d//делимость на два
		//mov edx, 0
		//mov ebx, b
		//idiv ebx
		//cmp edx, 0
		//je is_equal
		//mov a, 0
		//jmp my_end
		//is_equal :
		//mov a, 1
		//	my_end:
		//nop

		mov eax, d// проверка на простоту
		mov edx, 0
		mov ebx, 2
		mov ecx, 0
		Cicle :
		cmp ebx, a
		je ravno
		idiv ebx
		cmp edx, 0
		je is_equal
			mov edx, 0
		add ebx, 1
			mov eax, d
		jmp Cicle
			is_equal :
			mov g, 0
			jmp endd
		ravno:
		mov g, 1
			endd:
		nop
	}
	cout << g << " " << endl;
	return 0;
}