object Shikorlar_Login_va_Parol: TShikorlar_Login_va_Parol
  Left = 631
  Top = 219
  AlphaBlend = True
  BorderStyle = bsDialog
  Caption = 'Shifokorlar Login va  Parol'
  ClientHeight = 423
  ClientWidth = 302
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 302
    Height = 423
    Align = alClient
    BevelInner = bvLowered
    BevelKind = bkFlat
    BevelWidth = 5
    BorderWidth = 5
    BorderStyle = bsSingle
    Color = clAqua
    ParentBackground = False
    TabOrder = 0
    object Label1: TLabel
      Left = 42
      Top = 122
      Width = 174
      Height = 22
      Caption = 'Parol yoki Login xato'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clRed
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      Visible = False
    end
    object SpeedButton1: TSpeedButton
      Left = 42
      Top = 145
      Width = 145
      Height = 27
      Caption = 'Kirish'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 42
      Top = 166
      Width = 145
      Height = 27
      Caption = 'Chiqish'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton2Click
    end
    object SpeedButton3: TSpeedButton
      Left = 39
      Top = 354
      Width = 145
      Height = 26
      Caption = 'Ok'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton3Click
    end
    object SpeedButton4: TSpeedButton
      Left = 52
      Top = 188
      Width = 145
      Height = 27
      Caption = 'Qayta yuklash'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton4Click
    end
    object LabeledEdit1: TLabeledEdit
      Left = 39
      Top = 37
      Width = 178
      Height = 30
      EditLabel.Width = 47
      EditLabel.Height = 22
      EditLabel.Caption = 'Login'
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clBlue
      EditLabel.Font.Height = -19
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      TextHint = 'Login'
    end
    object LabeledEdit2: TLabeledEdit
      Left = 39
      Top = 89
      Width = 175
      Height = 30
      EditLabel.Width = 44
      EditLabel.Height = 22
      EditLabel.Caption = 'Parol'
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clBlue
      EditLabel.Font.Height = -19
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      PasswordChar = '*'
      TabOrder = 1
      TextHint = 'Parol'
    end
    object Edit2: TEdit
      Left = 193
      Top = 161
      Width = 121
      Height = 21
      TabOrder = 2
      Visible = False
    end
    object RadioButton2: TRadioButton
      Left = 56
      Top = 287
      Width = 145
      Height = 17
      Caption = 'Bemorlar'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      Visible = False
    end
    object RadioButton1: TRadioButton
      Left = 56
      Top = 259
      Width = 145
      Height = 17
      Caption = 'Shifokorlar'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      Visible = False
    end
    object Edit3: TEdit
      Left = 193
      Top = 138
      Width = 121
      Height = 21
      TabOrder = 5
      Visible = False
    end
  end
  object Edit1: TEdit
    Left = 219
    Top = 77
    Width = 121
    Height = 21
    TabOrder = 1
    Visible = False
  end
  object RadioGroup1: TRadioGroup
    Left = 39
    Top = 244
    Width = 219
    Height = 104
    Caption = 'Tanlang'
    Color = clAqua
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      'Shifokorlar'
      'Bemorlar'
      'Bo'#39'lim boshliqlari'
      'Direktor malumotlarini o'#39'zgartirish')
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 2
    Visible = False
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from SHifoxona_boshligi')
    Left = 200
    Top = 120
  end
  object ADOQuery_Bolim_boligi: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from bolim_boshliqlari')
    Left = 160
    Top = 32
  end
  object ADOQuery_Shifokor: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Shifokorlar')
    Left = 232
    Top = 16
  end
  object ADOQuery_Direktor: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * '
      'from Shifoxona_Boshligi')
    Left = 104
    Top = 32
  end
  object ADOQuery_Direktor_malumotlari: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Shifoxona_Boshligi')
    Left = 240
    Top = 56
  end
end
