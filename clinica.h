#ifndef CLINICA_H_INCLUDED
#define CLINICA_H_INCLUDED

#define QNT_MAX_MEDICOS 20;

const char logincerto[] = "teste";  //"jubileu";
const char senhacerta [] = "teste";  //"ponfrey";

typedef struct {
    char nome[50];
    char especialidade[50];

} Medico;

typedef struct {
    char nome [100];
    int idade;
    char genero;

}Paciente;

typedef struct{

    Paciente paciente;
    int dia, mes;
    int confirmada;
    char *NomeMedico;
}Consulta;





int NumeroMedicos = 0;
int NumeroConsultas = 0;
Medico listaMedicos[20];
Consulta listaConsultas[30];




#endif // CLINICA_H_INCLUDED
