#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	int c;
	int d;
	int i;
	int resul = 0;
	__asm {
		/*mov eax, a
		mov ebx, 10
		mov ecx, c
		mov edx, 0
		morty :
		cmp eax, 0
			je equu
			idiv ebx
			add resul, edx
			mov edx, 0
			add ecx, 1
			jmp morty
			equu:
			mov a, ecx*/


			/*mov eax, a
			mov edx, 0
			mov ebx, 10
			mov ecx, resul
			morty:
			cmp eax, 0
				je ravno
			idiv ebx
			imul ecx, 10
			  add ecx, edx
			  mov edx, 0
			jmp morty
				ravno:
			mov resul, ecx*/

			/*mov eax, a
			mov edx, 0
			mov ebx, 10
			morty:
			cmp eax, 0
				je ravno
			idiv ebx
			   cmp edx, b
				jge yees
				mov edx, 0
				jmp morty
				yees:
			mov b, edx
			mov edx, 0
			jmp morty
				ravno:
			mov edx, b
			mov resul, edx
		} */
		mov eax, a
		mov ebx, b 
		mov edx, 0
		morty:
			cmp eax, b
			jge is_equal
			mov eax, b
			idiv a	
			mov ebx, a
			mov eax, edx
			mov a, eax
			mov b, ebx
				cmp a, 0
				je trrr
			mov edx, 0
			jmp onn
			is_equal :
		idiv b
			
			mov eax, edx
		    mov a, eax
			mov b, ebx

			cmp a, 0
			je trrr

			mov edx, 0
			onn:
		jmp morty
			trrr :
			mov eax, b
			mov a, eax
			
	}
	cout << a << " " << endl;
}