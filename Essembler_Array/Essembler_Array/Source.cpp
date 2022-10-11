#include<iostream>// edi, esi
using namespace std;
void SwapArray(int* arrey) {
    __asm {
        mov eax, arrey
        mov ecx, [eax + 4]
        mov edx, [eax]
        mov[eax], ecx
        mov[eax + 4], edx
    }
}
void SwapA(int* a, int* b) {
    __asm {
        mov eax, a
        mov ecx, [eax]
        mov ebx, b
        mov edx, [ebx]
        mov[eax], edx
        mov[ebx], ecx

    }
}
int SumArray(int* arrey, int n) {
    int a;
    int count = 0;
    __asm {
        mov ecx, n
        mov eax, arrey
        mov ebx, 0
        mov edx, 0
        For1:
        add ebx, [eax + edx]
           add count, ebx
            add edx, 4
            loop FOR1
            mov a, ebx
    }
    return count;
}
int FindMaxArrayElement(int* arr, int n) {
    int a;
    __asm {
        mov ecx, n;
        mov eax, arr  
            mov edx, 0
            mov esi, [eax]
            FOR:
        add edx, 4
            mov edi, [eax + edx]
            //lea edi, [eax + edx]
            cmp edi, esi
            jg Greater
            jmp morty
            Greater:
        //xchg esi, edi 
        mov esi, edi
            morty:
        loop FOR
            mov a, esi
    }
    return a;
}
int CountEven(int* arr, int n) {
   int count = 0;
    __asm {
        mov esi, arr
        mov ecx, n
        mov edi, 0
        mov edx, 0
        mov ebx, 2
        FOR:
        mov eax, [esi + edi]
            idiv eax
            cmp edx, 0
            je Tr
            jmp morty
            Tr:
        inc count
            morty:
            mov edx, 0
            add edi, 4
        loop FOR
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }


    
    cout << SumArray(array, n) << endl;
}
