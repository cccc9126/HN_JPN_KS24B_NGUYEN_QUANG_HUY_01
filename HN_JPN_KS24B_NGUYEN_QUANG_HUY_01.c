/*
1.Nhập số phần tử và giá trị cho mảng                    [10 điểm]
2.In ra giá trị các phần tử trong mảng theo dạng (arr[0] = 1, arr[1] = 5 …)                                            [10 điểm]
3.Đếm số lượng các số hoàn hảo có trong mảng. Biết số hoàn hảo là số có tổng các ước bằng chính nó                                [10 điểm]
4.Tìm giá trị nhỏ thứ 2 trong mảng, không được sắp xếp mảng    [10 điểm]
5.Thêm một phần tử vào vị trí đầu tiên trong  mảng, phần tử mới thêm vào mảng phải do người dùng nhập vào                        [10 điểm]
6.Xóa phần tử tại một vị trí cụ thể (người dùng nhập vị trí)        [10 điểm]
7.Sắp xếp mảng theo thứ tự giảm dần (Selection sort)            [10 điểm]
8.Tìm kiếm phần tử trong mảng, phần tử tìm kiếm do người dùng nhập vào. Sử dụng thuật toán Binary search                        [10 điểm]
9.Sắp xếp lại mảng và hiển thị ra toàn bộ phần tử có trong mảng sao cho toàn bộ số lẻ đứng trước, số chẵn đứng sau                        [10 điểm]
10.Đảo ngược thứ tự của các phần tử có trong mảng và hiển thị ra toàn bộ phần tử có trong mảng theo dạng (arr[0] = 1 - lẻ, arr[1] = 2 - chẵn …)        [10 điểm]
 11.Thoát
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int choice = 0;
    int length=0;
    int add = 0;
    int delete=0;
    int a[100];
    int addNumber;
    int deleteNumber;
    int searchNumber;
    int sort=0;
    while(choice!=11){
        printf("MENU\n");
        printf("1. Nhập số phần tử và giá trị cho mảng\n");
        printf("2. In ra giá trị các phần tử trong mảng\n");
        printf("3. Đếm số lượng số hoàn hảo có trong mảng\n");
        printf("4. Tím giá trị nhỏ thứ 2 trong mảng\n");
        printf("5. Thêm một phần tử vào vị trí đầu tiên trong mảng\n");
        printf("6. Xóa phần tử tại một vị trí cụ thể\n");
        printf("7. Sắp xếp mảng theo thứ tự giảm dần\n");
        printf("8. Tìm kiếm phần tử trong mảng\n");
        printf("9. Sắp xếp lại mảng và hiển thị ra toàn bộ phần tử có trong mảng sao cho toàn bộ số lẻ đứng trước, số chẵn đứng sau\n");
        printf("10. Đảo ngược thứ tự của các phần tử trong mảng và hiển trị toàn bộ\n");
        printf("11. Thoát\n");
        printf("Hãy nhập lựa chọn của bạn : ");
        scanf("%d",&choice);
        if (choice==1){
            printf("Hãy nhập độ dài mảng : ");
            scanf("%d",&length);
            for(int i = 0;i<(length+add-delete);i++){
                printf("Hãy nhập phần tử a[%d] : ",i);
                scanf("%d",&a[i]);
            }
        }else if(choice==2){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                printf("Các phần tử của mảng là:\n");
                for(int i = 0;i<(length+add-delete);i++){
                    
                    printf("a[%d] = %d\n",i,a[i]);
                }
            }
        }else if(choice==3){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                int condition=0;
                for(int i = 0;i<(length+add-delete);i++){
                    int perfect=0;
                    for(int j = 1;j<a[i];j++){
                        if(a[i]%j==0){
                            perfect=perfect+j;
                        }
                    }
                    if(perfect==a[i]){
                        printf("\nSố hoàn hảo có trong mảng là : %d\n",a[i]);
                        condition++;
                    }
                }
                if(condition==0){
                    printf("\nKhông có số hoàn hảo trong mảng\n\n");
                }
            }
        }else if(choice == 4){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                int max=0;
                int temp;
                for(int i =1;i<(length+add-delete);i++){
                    if(a[i]>a[max]){
                        max=i;
                        temp = a[i];
                    }
                }
                a[max]=0;
                int MAX=0;
                for(int i = 0;i<(length+add-delete);i++){
                    if(a[i]>a[MAX]){
                        MAX=i;
                    }
                }
                printf("\nSố lớn thứ 2 trong mảng là :  %d\n",a[MAX]);
                a[max]=temp;
                printf("\n");
            }
        }else if(choice==5){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                for(int i=(length+add-delete);i>0;i--){
                    a[i]=a[i-1];
                    
                }
                add++;
                printf("Hãy nhập phần tử bạn muốn thêm vào vị trí đầu tiên của mảng : ");
                scanf("%d",&addNumber);
                a[0]=addNumber;
            }
        }else if(choice==6){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                printf("Hãy chọn vị trí bạn muốn xóa phần tử : ");
                scanf("%d",&deleteNumber);
                for(int i=deleteNumber;i<(length+add-delete);i++){
                    a[i]=a[i+1];
                }
                delete++;
            }
        }else if(choice==7){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                sort++;
                for(int i=0;i<(length+add-delete);i++){
                    int max=i;
                    for(int j=i+1;j<(length+add-delete);j++){
                        if(a[j]>a[max]){
                            max=j;
                        }
                    }
                    int temp = a[i];
                    a[i]=a[max];
                    a[max]=temp;
                }
            }
        }else if(choice==8){
            if(length==0){
                printf("\nBạn chưa nhập phần tử cho mảng\n\n");
            }else{
                if(sort>0){
                    int start=0;
                    int end=(length+add-delete);
                    int mid;
                    printf("Hãy nhập phần tử bạn muốn tìm kiếm : ");
                    scanf("%d",&searchNumber);
                    while(start<end){
                        mid=(start+end)/2;
                        if(searchNumber>mid){
                            end-1;
                        }else if(searchNumber<mid){
                            
                        }
                    }
                }
            }
        }else if(choice==10){
            for(int i=0;i<(length+add-delete)/2;i++){
                int temp=a[i];
                a[i]=a[length+add-delete-i-1];
                a[length+add-delete-i-1]=temp;
                
            }
        }
    }
    return 0;
}
