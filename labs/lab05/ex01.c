#include <stdio.h>

#define ALUNOS 10
#define DISCIPLINAS 5

long score_disciplina(int disciplina, int valores[ALUNOS][DISCIPLINAS]) {
    int i;
    long result = 0;
    for (i = 0; i < ALUNOS; i++) {
        result += valores[i][disciplina];
    }

    return result;
}

long score_aluno(int aluno, int valores[ALUNOS][DISCIPLINAS]) {
    int i;
    long result = 0;

    for (i = 0; i < DISCIPLINAS; i++) {
        result += valores[aluno][i];
    }

    return result;
}


int main() {
    int i,n,a,d,v,valores[ALUNOS][DISCIPLINAS] = {0};
    long res_aluno = 0, res_disciplina = 0;

    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        scanf("%d %d %d",&a,&d,&v);
        valores[a][d] += v;
    }

    for (i = 0; i < ALUNOS; i++) {
        if (score_aluno(i, valores) > score_aluno(res_aluno,valores)) { res_aluno = i; } 
    }

    for (i = 0; i < DISCIPLINAS; i++) {
        if (score_disciplina(i, valores) > score_disciplina(res_disciplina,valores)) { res_disciplina = i; } 
    }

    printf("%ld\n%ld\n",res_disciplina,res_aluno);

    return 0;
}