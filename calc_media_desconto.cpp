// Example program
#include <iostream>
#include <string>

using namespace std;

float calcula_media(float notas[], int qtd_notas){
    float media_notas = 0;
    for (int i = 0; i < qtd_notas; i++){
        //cout << "Nota " << i+1 << " = " << notas[i] << endl;
        // soma notas
        media_notas = media_notas + notas[i];
    }  
    // calcula media
    media_notas = media_notas / qtd_notas;
    //cout << "Função calcula_media, média= " << media_notas;
    return media_notas;
}

int main(){
    float notas[5];
    int qtd_notas = 0;
    float media = 0;
    // float desconto = 0;
  
    cout << "Digite a quantidade notas: ";
    cin >> qtd_notas;
  
    // ler notas
    for (int i = 0; i < qtd_notas; i++){
        cout << "Digite a nota " << i+1 << ": ";
        float nota;
        cin >> nota;
        notas[i] = nota;
    }
  
    cout << "\n Imprimindo notas \n";
    for (int i = 0; i < qtd_notas; i++){
        cout << "Nota " << i+1 << " = " << notas[i] << endl;
    }  
  
    // calcula a média
    media = calcula_media(notas, qtd_notas);
    cout << "Média = " << media;
  
    
    /*
    *  Define descontos de acordo com a média do aluno.
    *
    *  10% de desconto se média entre 7 a 7.9
    *  15% de desconto se média entre 8 a 8.9
    *  20% de desconto se média entre 9 a 10
    *  
    */
    
    // calcula_desconto da mensalidade
    float mensalidade = 200.0;       // R$ 200,00
    float desconto10pct = 10 / 100.0;
    float desconto15pct = 15 / 100.0;
    float desconto20pct = 20 / 100.0;
    float desconto = 0;
    
    if (media >= 7.0 && media <= 7.9){
        desconto = mensalidade * desconto10pct;
        mensalidade = mensalidade - desconto;
    }
    else if (media >= 8.0 && media <= 8.9){
        desconto = mensalidade * desconto15pct;
        mensalidade = mensalidade - desconto;
    }
    else if (media >= 9.0 && media <= 10){
        desconto = mensalidade * desconto20pct;
        mensalidade = mensalidade - desconto;
    }
    else {
        cout << "\nSem desconto, média " << media << " é abaixo de 7.0";
    }
    
    cout << "\n\n| Total |\n";
    cout << "# Mensalidade original = R$ " << mensalidade + desconto << 
    " | Desconto = R$ " << desconto << " | Mensalidade com desconto = R$ " << mensalidade << endl;
}

