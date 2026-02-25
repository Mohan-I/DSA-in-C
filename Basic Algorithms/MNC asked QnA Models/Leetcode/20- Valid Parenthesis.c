bool isValid(char* s) {
    int size = strlen(s);

    if(size < 2) return false;
    int stack[size];
    int top = -1;

    for(int i = 0; i < size; i++){
        char c = s[i];

        if( c == '(' || c == '{' || c == '[' ){
            stack[++top] = s[i];
        }else{
            if(top == -1) return false;
            char topchar = stack[top--];

            if( c == ')' && topchar != '(') return false;
            if( c == '}' && topchar != '{') return false;
            if( c == ']' && topchar != '[') return false;
        }
    }
    
    if( top == -1 ){
        return true;
    }else{
        return false;
    }
}