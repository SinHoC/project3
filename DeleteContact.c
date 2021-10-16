Status delete_contact(AddressBook *address_book)
{
    char nameInput[32] = ""; 
    char phoneInput[32] = ""; 
    char emailInput[32] = "";

    ContactInfo *ptr;
    system("cls");
    int option, siNo;

    option = get_option(NUM, "");


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
        scanf("%d", &option);
        if(option == 0){
        main_menu();
        }
        break;
        case 1:
        printf("Enter the Name: ",&nameInput);
        scanf("%s", nameInput);
        size_t i = 0;
        for(; i < address_book->count; i++){
            if(strcmp(address_book->list[i].name[0], nameInput)){
                free(address_book->list);
                address_book->count--;
            }
        }

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
