int ePalindromo(const char *s, int esquerda, int direita){
    while(esquerda < direita){
        if (s[esquerda] != s[direita]){
            return 0;
        };
    esquerda++;
    direita--;
    };
    return 1;
};

char* longestPalindrome(char* s) {
    int tamanho = strlen(s);
    if(tamanho == 0){
        return "";
    };

    int comeco = 0;
    int tamanhomax = 1;

    for(int i = 0; i < tamanho; i++){
        for(int j = i; j < tamanho; j++){
            int tamanhoatual = j - i + 1;

            if(tamanhoatual > tamanhomax && ePalindromo(s,i,j)){
                comeco = i;
                tamanhomax = tamanhoatual;
            }
        }
    }

    char *resultado = (char*)malloc((tamanhomax + 1) * sizeof(char));
    strncpy(resultado, s + comeco, tamanhomax);
    resultado[tamanhomax] = '\0';

    return resultado;
}