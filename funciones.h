#ifndef FUNCIONES_H
#define FUNCIONES_H

int suma(int x, int y){
    return x + y;
}

int resta(int x, int y){
    if(x < 0){
        return 0;
    }
    return x - y;
}

#endif  