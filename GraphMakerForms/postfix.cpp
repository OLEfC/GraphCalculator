#include "postfix.h"

int getPriority(char C)
{
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

bool isOperator(char x) {
    if (x == '+') {
        return true;

    }
    if (x == '-') {
        return true;

    }
    if (x == '*') {
        return true;

    }
    if (x == '/') {
        return true;

    }
    if (x == '^') {
        return true;

    }


    return false;
}
bool isFunction(string rivny, int i) {
    if (rivny[i] == 's') {
        if (rivny[i + 1] == 'i') {
            if (rivny[i + 2] == 'n') {
                return true;
            }
        }


    }
    if (rivny[i] == 'c') {
        if (rivny[i + 1] == 'o') {
            if (rivny[i + 2] == 's') {
                return true;
            }
        }
    }
    if (rivny[i] == 'a') {
        if (rivny[i + 1] == 'b') {
            if (rivny[i + 2] == 's') {
                return true;
            }
        }
    }
    if (rivny[i] == 'l') {
        if (rivny[i + 1] == 'o') {
            if (rivny[i + 2] == 'g') {
                return true;
            }
        }
    }
    if (rivny[i] == 't') {
        if (rivny[i + 1] == 'a') {
            if (rivny[i + 2] == 'n') {
                return true;
            }
        }
    }
    if (rivny[i] == 'c') {
        if (rivny[i + 1] == 't') {
            if (rivny[i + 2] == 'g') {
                return true;
            }
        }
    }
    if (rivny[i] == 'i') {
        if (rivny[i + 1] == 'n') {
            if (rivny[i + 2] == 'v') {
                return true;
            }
        }
    }



    return false;

}
bool isOperand(char x) {

    if (x == 'x') {

        return true;

    }
    if (x == '.') {

        return true;

    }
    if (isdigit(x)) {

        return true;

    }
    return false;
}
bool isDushky(char x) {
    if (x == ')') {
        return true;

    }
    if (x == '(') {
        return true;

    }
    return false;
}


string* parser(string input) {
    input = "(" + input + ")";
    int itter = 0;
    for (int i = 0; i < input.length(); i++) {
        if (isOperand(input[i])) {
            while (isOperand(input[i])) {
                i++;
            }
            itter++;
        }
        if (isOperator(input[i])) {
            itter++;
        }
        if (isFunction(input, i)) {
            itter++;
        }
        if (isDushky(input[i])) {
            itter++;
        }
    }
    itter++;
    int v = 1;
    string* parse = new string[itter];
    parse[0] = to_string(itter - 1);
    for (int i = 0; i < input.length(); i++) {
        if (isOperator(input[i])) {
            parse[v] = input[i];
        }
        else if (isFunction(input, i)) {
            if (input[i] == 's') {
                parse[v] = "sin";
            }
            if (input[i] == 'c') {
                if (input[i + 2] == 's') {
                    parse[v] = "cos";
                }
                if (input[i + 2] == 'g') {
                    parse[v] = "ctg";
                }
            }
            if (input[i] == 'a') {
                parse[v] = "abs";
            }
            if (input[i] == 'l') {
                parse[v] = "log";
            }
            if (input[i] == 't') {
                parse[v] = "tan";
            }
            if (input[i] == 't') {
                parse[v] = "tan";
            }
            if (input[i] == 'i') {
                parse[v] = "inv";
            }
            i = i + 2;
        }
        else if (isOperand(input[i])) {
            string chyslo = "";
            if (isdigit(isOperand(input[i]))) {

                parse[v] = input[i];

            }
            else {
                while (isOperand(input[i])) {
                    if (i < input.length()) {
                        chyslo = chyslo + input[i];
                        i++;
                    }
                }
                i--;
                parse[v] = chyslo;
            }
        }
        else if (isDushky(input[i])) {
            parse[v] = input[i];
        }
        v++;
    }
    return parse;
}
string* toPostfix(string* parse) {
    int inputLength = stoi(parse[0]) + 1;
    int postlen = 0;
    string temp;
    for (int i = 1; i < inputLength; i++) {
        if (isDushky((parse[i])[0]) == false) {

            postlen++;

        }
    }
    postlen++;
    string* output = new string[postlen];
    output[0] = to_string(postlen - 1);
    stack <string> stack;
    int lich = 1;
    for (int i = 1; i < inputLength; i++) {
        if (parse[i] == "(") {
            stack.push("(");
        }
        if (parse[i] == ")") {
            while (stack.top() != "(")
            {
                output[lich] = stack.top();
                stack.pop();
                lich++;
            }
            stack.pop();
            if (stack.empty() == false) {
                if (isFunction(stack.top(), 0)) {
                    output[lich] = stack.top();
                    stack.pop();
                    lich++;
                }
            }

        }
        if (isOperand((parse[i])[0])) {
            output[lich] = parse[i];
            lich++;
        }
        if (isFunction(parse[i], 0)) {
            stack.push(parse[i]);

        }
        if (isOperator((parse[i])[0])) {

            while ((isFunction(stack.top(), 0) == true) || (getPriority(stack.top()[0]) > getPriority((parse[i])[0]))/* || ()*/) {


                output[lich] = stack.top();
                stack.pop();
                lich++;


            }
            stack.push(parse[i]);


        }
    }

    return output;

}

double whatoperator(char oper, double a, double b, double h) {
    if (oper == '+') {
        return(a + b);

    }
    if (oper == '-') {
        return(a - b);

    }
    if (oper == '/') {
        if (abs(b) < abs(h)) {
            return 7878787;
        }
        else { return(a / b); }


    }
    if (oper == '*') {
        return(a * b);

    }
    if (oper == '^') {
        return(pow(a, b));

    }

}
double whatfun(string oper, double a, double h) {
    if (oper == "sin") {
        return(sin(a));
    }
    if (oper == "cos") {
        return(cos(a));
    }
    if (oper == "abs") {
        return(abs(a));
    }
    if (oper == "log") {
        if (a > 0) {
            return(log10(a));
        }
        else {
            return 7878787;
        }

    }
    if (oper == "tan") {

        double pi = 3.141592;

        double k = abs(((abs(a) - (pi / 2) + pi) / (pi)));
        double c = round(abs(((abs(a) - (pi / 2) + pi) / (pi))));
        if (abs(k - c) < h) {

            return 7878787;
           

        }
        else {
            return tan(a);

        }

    }
    if (oper == "ctg") {
        if (abs(sin(a)) < abs(h)) {
            return 7878787;
        }
        else { return(cos(a) / sin(a)); }

    }
    if (oper == "inv") {
        return(-1*a);
    }

}

double calculator(string* output, double x, double h) {
    stack <string> stack;
    int outputLength = stoi(output[0]) + 1;

    //cout << outputLength << endl << endl;
    for (int i = 1; i < outputLength; i++) {

        if (isOperand((output[i])[0])) {
            stack.push(output[i]);
        }
        else if (isOperator((output[i])[0])) {
            double a, b;
            if (stack.top() == "x") {
                b = x;
                stack.pop();

            }
            else {
                b = stod(stack.top());
                stack.pop();
            }
            if (stack.top() == "x") {
                a = x;
                stack.pop();

            }
            else {
                a = stod(stack.top());
                stack.pop();
            }




            string temp = output[i];
            if (whatoperator((output[i])[0], a, b, h) != 7878787) {
                string oper = to_string(whatoperator((output[i])[0], a, b, h));
                stack.push(oper);
                
            }
            else {
                return 7878787;
            }


          


        }
        else {
            double a;
            if (stack.top() == "x") {
                a = x;
                stack.pop();

            }
            else {
                a = stod(stack.top());
                stack.pop();
            }




            string temp = output[i];
            if (whatfun(temp, a, h) != 7878787) {
                string oper = to_string(whatfun(temp, a, h));
                stack.push(oper);
            }
            else {
                return 7878787;
            }

        }



    }

    double result = stod(stack.top());


    return result;
}


double ydh(string input, double x0, double  h) {
    
    if ((calculator(toPostfix(parser(input)), x0, h)) == 7878787) {
        return(7878787);
    }
    else if ((calculator(toPostfix(parser(input)), x0+h, h)) == 7878787) {
        return(7878787);
    }
    else if ((calculator(toPostfix(parser(input)), x0-h, h)) == 7878787) {
        return(7878787);
    }
    else { return (1 / (2 * h)) * (calculator(toPostfix(parser(input)), x0 + h, h) - calculator(toPostfix(parser(input)), x0 - h, h)); }


   
}

double ydr(string input,double x0, double h) {
    if (ydh(input, x0, h) == 7878787) { return(7878787); }
    else if (ydh(input, x0, 2 * h) == 7878787) { return(7878787); }
    else { return ydh(input, x0, h) + (ydh(input, x0, h) - ydh(input, x0, 2 * h)) / 3; }
   
}

double simpson(string input, double al, double bl, double a, double b, double Ne, double  hharafika) {
    double ab = abs(b) + abs(a);
    double abl = abs(bl) + abs(al);

    double Nt = ((ab * Ne) / abl)+0.5;

    int N = 100;

    double h = ( b-a) / N;
    double x = a;
    double* array = new double[N+1];

    for (int i = 0; i < N +1; i++) {
        array[i]= calculator(toPostfix(parser(input)), x, hharafika);
        x = x + h;
    }
    double sumpar=0;
    double sumnepar=0;
    for (int i = 1; i < N; i = i + 2) {
        sumnepar = sumnepar + array[i];
    }
    
    for (int i = 2; i < N-1; i = i + 2) {
        sumpar = sumpar + array[i];
    }
    
    double simp = ( (h/3)*(array[0] +(4*sumnepar)+(2*sumpar) +array[N]));


    return simp;
}