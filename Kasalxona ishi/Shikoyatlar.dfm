object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 
    'Kasalliklar tarixi, shikoyatlar, ahvolidagi o'#39'zgarishlar, taxmin' +
    'iy diagnoz, tekshirish rejasi'
  ClientHeight = 530
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object RichEdit1: TRichEdit
    Left = 0
    Top = 0
    Width = 756
    Height = 530
    Align = alClient
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    TabOrder = 0
  end
  object MainMenu1: TMainMenu
    Left = 360
    Top = 120
    object Saqlash1: TMenuItem
      Caption = 'Saqlash'
    end
    object Font1: TMenuItem
      Caption = 'Font'
      OnClick = Font1Click
    end
    object Chiqish1: TMenuItem
      Caption = 'Chiqish'
      OnClick = Chiqish1Click
    end
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 376
    Top = 272
  end
end
