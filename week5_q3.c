// 포인터를 이용해서 버블정렬 코드 짜기
// 2021-02-15
#include <stdio.h>

void sort(int *n, int arr[]);

int main()
{
    int n = 7;
    int arr[7] = { 0, 25, 10, 17, 6, 12, 9 };
    sort(&n, arr);  //입력 인자를 '주소'로 입력해서 함수 실행

    return 0;
}

// sort
void sort(int *n, int arr[]){   // integer포인터 하나, 배열 주소 하나를 입력으로받는 함수 sort
    int temp;   // 임시 변수 선언

    for(int i = 0 ;i < *n -1;i++){    //(원소 갯수-1) 만큼 반복
        for(int j = 0; j< *n -1;j++){ //(원소 갯수-1) 만큼 반복(O(n^2))
            if(arr[j] > arr[j+1]){  // 앞의것이 뒤의 것보다 크면 서로 위치를 바꾸기
               temp = *(arr + j);
               *(arr + j) = *(arr + j+1);
               *(arr + j+1) = temp;
            }
            //printf("i = %d, j = %d, arr[j] = %d\n", i, j, arr[j]);  //반복문 확인용 출력.
        }
        printf("\n");
    }

    for(int i = 0; i < *n ; i++){   // (정렬 완료된) 배열 출력.
        printf("%d", arr[i]);
        if( i != *n -1){
            printf(", ");
        }
    }
    printf("\n");
}
/*
지시문

여러분은 데이터를 정리하기 위해서 엑셀을 많이 사용하실 것입니다.
게다가, 데이터들을 보기 좋게 하기 위해서 정렬 기능을 많이 사용하실 텐데
간단한 버블 정렬 코드를 배열이 아닌 포인터를 활용하여 완성해 보세요.

예) main code는 다음과 같습니다. sort function 을 완성해보세요.
출력값 : 0, 6, 9, 10, 12, 17, 25
*/