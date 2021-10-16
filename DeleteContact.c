Status delete_contact(AddressBook *address_book)
{
    char nameInput[32] = ""; 
    char phoneInput[32] = ""; 
    char emailInput[32] = "";

    int option, siNo;

    menu_header("Search contact to Delete by: \n"); 
    printf("0. Back\n");
    printf("1. Name\n");
    printf("2. Phone No\n");
    printf("3. Email ID\n");
    printf("4. Serial No\n");
    printf("\nPlease select an option: ");
    scanf("%d",&option);


    if(address_book->count == 0){
        printf("Address book is empty and cannot be deleted");
        return;
    }

     switch(option){
        case 0:
            menu(address_book);
               break;
        case 1:
            printf("Enter the Name: ");
            scanf("%s", nameInput);

            for(int i = 0; i <= address_book->count; i++){
                if(strcmp(address_book->list[i].name[0], nameInput) == 0){
                    printf("%d", i);
                    for(int j = i; j <= address_book->count ; j++){

                        address_book->list[j] = address_book->list[j+1];
                    }
                }

            }
            address_book->count--;
            //find name and delete it 
            break;
        case 2:
            printf("Enter the Phone No: ",&phoneInput);
            scanf("%s", phoneInput);
            //find phone number and delete it 
            break;
        case 3:
            printf("Enter the Email ID: ",&emailInput);
            scanf("%s", emailInput);
            //find email and delete it 
            break;
        case 4:
            printf("Enter the Serial Number: ", &siNo);
            scanf("%d", siNo);
            //find siNo and delete it 
            break;


        }
    return e_success;
}
