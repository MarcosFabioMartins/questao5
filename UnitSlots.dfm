object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Prize'
  ClientHeight = 203
  ClientWidth = 319
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 319
    Height = 203
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 208
    ExplicitHeight = 180
    object SpeedButton1: TSpeedButton
      AlignWithMargins = True
      Left = 11
      Top = 11
      Width = 297
      Height = 22
      Margins.Left = 10
      Margins.Top = 10
      Margins.Right = 10
      Align = alTop
      Caption = 'Clique e digite os n'#250'meros e advinhe a sequ'#234'ncia'
      OnClick = SpeedButton1Click
      ExplicitLeft = 96
      ExplicitTop = 80
      ExplicitWidth = 23
    end
    object Memo1: TMemo
      AlignWithMargins = True
      Left = 11
      Top = 39
      Width = 297
      Height = 160
      Margins.Left = 10
      Margins.Right = 10
      Align = alClient
      ReadOnly = True
      ScrollBars = ssBoth
      TabOrder = 0
    end
  end
end
