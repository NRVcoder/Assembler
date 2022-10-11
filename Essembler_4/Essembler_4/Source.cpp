#include<iostream>
using namespace std;
void Turning(int* arr, int n) {
	__asm {
		mov ecx, n
		mov esi, arr
		mov edi, 0
		FOR:
		mov eax, [esi + edi]
			push eax
			add edi, 4
		loop FOR
			mov ecx, n
			mov esi, arr
			mov edi, 0
			morty:
		pop eax
			mov [esi + edi], eax
			add edi, 4
		dec ecx
			cmp ecx, 0
			je DA
		jmp morty
			DA:
		nop
	}
}
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	Turning(arr, n);
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
}
