//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <iostream>
#include <tchar.h>
#include <vector>

#define LINHAS 3
#define COLUNAS 5

#include "UnitSlots.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent *Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------
std::vector<std::vector<int> > cria_slot()
{
   std::vector<std::vector<int> > slot(LINHAS, std::vector<int>(COLUNAS));

   for (int i = 0; i < LINHAS; i++)
   {
      String linhaPrompt = "Insira os valores da linha " + IntToStr(i + 1) + ":";

      for (int j = 0; j < COLUNAS; j++)
      {
         String valor;
         InputQuery(linhaPrompt, "Digite o valor:", valor);

         try
         {
            slot[i][j] = StrToInt(valor);
         }
         catch (EConvertError &exception)
         {
            ShowMessage("Valor inválido.");
            j--; // Repetir a leitura para a mesma coluna
         }
      }
   }

   return slot;
}

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
   std::vector<std::vector<int> > premio = {{1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 1, 0, 0}};
   std::vector<std::vector<int> > slot = cria_slot();
   AnsiString digitado = "Digitado: ";
   int count_prize = 0;

   for (int li = 0; li < 3; li++)
   {
      for (int co = 0; co < 5; co++)
      {
         if (slot[li][co] == premio[li][co])
         {
            count_prize++;
         }
      }
   }

   if (count_prize == 15)
   {
      Memo1->Lines->Add("Ganhooou!");
   }
   else
   {
      Memo1->Lines->Add("Não ganhou.");
      Memo1->Lines->Add("    ");

      for (int li = 0; li < 3; li++)
      {
         for (int co = 0; co < 5; co++)
         {
            digitado += IntToStr(slot[li][co]) + " ";
         }
      }

      Memo1->Lines->Add(digitado);
   }
}

//---------------------------------------------------------------------------

