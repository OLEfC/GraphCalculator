#include "postfix.h"
/*������ �������
* sin
* cos
* abs
* pow
* log
* +
* -
* *
* /
*/

/*INFIX->POSTFIX
* ���� ������ � ������ ��� ����������� ��������
* ���� ������ � ���������� ��������
* ���� ������ � '(',
* ���� ������ � ')'
* ���� ������ � ������� ���������
*
*
*/
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

    /*for (int i = 0; i < itter; i++) {
         cout << parse[i] << endl;
     }*/

    return parse;
}
string* toPostfix(string* parse) {
    int inputLength = stoi(parse[0]) + 1;
    //cout << inputLength << endl << endl;
    int postlen = 0;
    string temp;
    for (int i = 1; i < inputLength; i++) {
        if (isDushky((parse[i])[0]) == false) {

            postlen++;

        }
    }
    //cout << postlen << endl;
    postlen++;



    string* output = new string[postlen];
    output[0] = to_string(postlen - 1);
    stack <string> stack;
    int lich = 1;
    for (int i = 1; i < inputLength; i++) {
        // cout<<i<<")" << parse[i] << endl;

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
    /*for (int i = 1; i < lich; i++) {
        cout << output[i] << " ";
    }
    */

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
            return 99999;
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
            return 99999;
        }

    }
    if (oper == "tan") {

        double pi = 3.141592;

        double k = abs(((abs(a) - (pi / 2) + pi) / (pi)));
        double c = round(abs(((abs(a) - (pi / 2) + pi) / (pi))));
        if (abs(k - c) < h) {

            return 99999;
           

        }
        else {
            return tan(a);

        }

    }
    if (oper == "ctg") {
        if (abs(sin(a)) < abs(h)) {
            return 99999;
        }
        else { return(cos(a) / sin(a)); }

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





            string oper = to_string(whatoperator((output[i])[0], a, b, h));
            stack.push(oper);



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
            if (whatfun(temp, a, h) != 99999) {
                string oper = to_string(whatfun(temp, a, h));
                stack.push(oper);
            }
            else {
                return 99999;
            }

        }



    }

    double result = stod(stack.top());


    return result;
}



double fp(string input,double x, double h) {
    double y = calculator(toPostfix(parser(input)), x, h);
        return y;
}