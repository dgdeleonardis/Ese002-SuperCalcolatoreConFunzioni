float somma(float a, float b) {
    float risultato;
    risultato = a + b;
    return risultato;
}

float sottrazione(float a, float b) {
    float risultato;
    risultato = a - b;
    return risultato;
}

float prodotto(float a, float b) {
    float risultato;
    risultato = a * b;
    return risultato;
}

float divisione(float a, float b) {
    float risultato;
    risultato = a / b;
    return risultato;
}

int quoziente(int a, int b) {
    int quoziente;
    quoziente = a / b;
    return quoziente;
}

float frazionale(int a, int b) {
    int parteintera;
    float risultato, frazionale;
    parteintera = quoziente ( a, b);
    risultato = divisione( a, b);
    frazionale = risultato - parteintera;
    return frazionale;
}

float potenza(float base, int esponente) {
      int potenza = 1;
      while(esponente > 0){
                      potenza = potenza *base;
                      esponente--;
                         }
      return potenza;
}
