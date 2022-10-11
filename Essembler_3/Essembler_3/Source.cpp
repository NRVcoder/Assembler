#include <iostream> // edi, esi
using namespace std;
void SwapC(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SwapA(int* a, int* b) {
    __asm {
      mov eax, a
      mov ecx, [eax]
      mov ebx, b
      mov edx, [ebx]
      mov [eax] , edx
      mov [ebx], ecx
      
    }
}
void Swap2(int* arrey) {
    __asm {
        mov eax, arrey
        mov ecx, [eax + 4]
        mov edx, [eax]
        mov [eax], ecx
        mov [eax + 4], edx
    }
}
int SumA(int* arrey, int n) {
    int a;
    __asm {
    mov ecx, n
    mov eax, arrey
    mov ebx, 0
    mov edx, 0
    For1:
    add ebx, [eax + edx]
        add edx, 4
        loop FOR1
        mov a, ebx
    }
    return a;
}
void Sort(int* arrey, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arrey[j] > arrey[j + 1]) {
                int temp;
                temp = arrey[j];
                arrey[j] = arrey[j + 1];
                arrey[j + 1] = temp;
           }
        }
    }
}
void SortA(int* arrey, int n) {
    int a = n - 1;
    __asm {
   mov ecx, a
   mov edi, n
   mov eax, arrey
   mov esi, [eax]
   mov ebx, 4
   FOR2:
    cmp edi, 0
       je ravvn
FOR1:
  cmp esi, [eax + ebx]
     jg darr
      jmp TOADD
      darr:
      xchg esi, [eax + ebx]
      TOADD:
    add ebx, 4
       loop FOR1
          dec edi
jmp FOR2
      ravvn:     
           nop
    }
}
int main() {

    int n;
    cin >> n;
    int* arrey = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arrey[i];
    }
    SortA(arrey, n);
    //int* pointer = &b;
   // cin >> a >> b;
    //__asm {
    //    mov eax, a
    //    mov ebx, pointer
    //    mov[ebx], eax//записать по адресу лежащему в ебх, то что храниться в еах
    //    mov edx, [ebx]
    //    mov c, edx
    //}
    //cout << b << ' ' << *pointer << endl;
    //SwapA(&a, &b);
      for(int i = 0; i < n; ++i) {
            cout << arrey[i] << " ";
        }
}

