object Form_Word_uchun: TForm_Word_uchun
  Left = 0
  Top = 0
  Caption = '      Mulumotlarni chiqarish'
  ClientHeight = 394
  ClientWidth = 602
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 602
    Height = 394
    Align = alClient
    BevelInner = bvLowered
    BevelWidth = 10
    Color = clScrollBar
    ParentBackground = False
    TabOrder = 0
    object Button1: TButton
      Left = 23
      Top = 32
      Width = 169
      Height = 25
      Caption = 'Bemor uchun dorilar'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 22
      Top = 72
      Width = 169
      Height = 25
      Caption = 'Bemor shaxsiy malumotlari'
      TabOrder = 1
    end
    object Button3: TButton
      Left = 20
      Top = 111
      Width = 169
      Height = 25
      Caption = 'Bemor Kasallik tarixi'
      TabOrder = 2
    end
  end
end
