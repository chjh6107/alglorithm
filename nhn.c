#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solution(int sizeOfMatrix, int **matrix) {
  // TODO: 이곳에 코드를 작성하세요.
    for(int i=0; i<sizeOfMatrix;i++){
        for(int j=0; j<sizeOfMatrix; j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}

struct input_data {
  int sizeOfMatrix;
  int **matrix;
};

void process_stdin(struct input_data *inputData) {
  int j = 0;
  size_t linecap = 0;
  char *line = NULL, *brkt = NULL, *token = NULL, *sep = " \n";

  getline(&line, &linecap, stdin);
  inputData->sizeOfMatrix = atoi(line);

  inputData->matrix = calloc(inputData->sizeOfMatrix, sizeof(int *));
  for (int i = 0; i < inputData->sizeOfMatrix; i++) {
    getline(&line, &linecap, stdin);
    inputData->matrix[i] = calloc(inputData->sizeOfMatrix, sizeof(int));
    for (j = 0, token = strtok_r(line, sep, &brkt); j < inputData->sizeOfMatrix && token != NULL; j++, token = strtok_r(NULL, sep, &brkt)) {
      inputData->matrix[i][j] = atoi(token);
    }
  }
}

int main() {
    struct input_data inputData;
    process_stdin(&inputData);
    
    solution(inputData.sizeOfMatrix, inputData.matrix);
    return 0;
}