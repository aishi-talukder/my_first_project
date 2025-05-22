#include <stdio.h>

int main()
{
    printf("Insert the number of element in an Array:");
    int n,choice;
    scanf("%d",&n);
    int a[n];
    printf("Insert Array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    while (1) {
        printf("If you want to update any value press 1.\n");
        printf("If you want to delete any value press 2.\n");
        printf("If you want to display the array press 3.\n");
        printf("Sort array (Ascending/Descending) : press 4.\n");
        printf("If you want to search the array press 5.\n");
        printf("To exit press 6.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
            {
                int index,nvalue;
            printf("Which value you want to update and tell me the index number? ");
            scanf("%d",&index);
            if(index>=0 && index<n){
                 printf("Enter the new value: ");
                  scanf("%d",&nvalue);
                }
                printf("Updated Array:");
                a[index]=nvalue;
                for(int i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
            
            break;
            }
            case 2:
            {
                printf("Enter the value to delete: ");
                int found=0, v;
                scanf("%d",&v);
                for(int i=0; i<n ;i++)
                {
                    if(a[i]==v)
                    {
                        for(int j=i; j<n-1;j++)
                        {
                            a[j]=a[j+1];
                        }
                        n--;
                        found=1;
                        printf("Value %d deleted\n",v);
                        break;
                    }
                }
                if(!found)
                {
                     printf("Value not found\n");
                }
                printf("New Array: ");
                for(int i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
                break;
                }
                case 3:
                {
                    printf("Array Elements: ");
                    for(int i=0;i<n;i++)
                    {
                        printf("%d ",a[i]);
                    }
                    printf("\n");
                    break;
                }
                case 4:
                {
                    printf("Press A/a for Ascending and D/d for Descending: ");
                    int temp=0;
                    char s;
                    scanf(" %c",&s);
                    if(s=='A'|| s=='a')
                    {
                        for(int i=0;i<n;i++)
                        {
                            for(int j=i+1;j<n;j++)
                            {
                                if(a[i]>a[j]){
                                    temp = a[i];
                                    a[i]=a[j];
                                    a[j]=temp;
                                }
                            }
                        }
                        printf("Ascending Array: ");
                        for(int i=0;i<n;i++){
                            printf("%d ",a[i]);
                        }
                    }
                    else if(s=='D'||s=='d')
                    {
                        for(int i=0;i<n;i++)
                        {
                            for(int j=i+1;j<n;j++)
                            {
                                 if(a[i]<a[j]){
                                    temp = a[i];
                                    a[i]=a[j];
                                    a[j]=temp;
                                }
                            }
                        }
                        printf("Descending Array: ");
                        for(int i=0;i<n;i++){
                            printf("%d ",a[i]);
                        }
                    }
                    printf("\n");
                    break;
                }
                case 5:
                {
                    int ch,find=0,at=0;
                    printf("Which number are you searching: ");
                    scanf("%d",&ch);
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]==ch){
                            find=1;
                            at=i;
                        }
                        else{
                            continue;
                        }
                    }
                    if(find==1){
                        printf("Found the number at index %d.\n",at);
                    }
                    else{
                        printf("Not found!\n");
                    }
                    break;
                }
                default:
                {
                    printf("Entered invalid choice.\n");
                    printf("To do any task press 1 to 5.\n");
                }
            }
            break;
}
return 0;
}