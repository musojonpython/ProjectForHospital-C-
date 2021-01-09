object Form1: TForm1
  Left = 372
  Top = 177
  BorderStyle = bsDialog
  Caption = 'Qabulxona uchun'
  ClientHeight = 295
  ClientWidth = 803
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 803
    Height = 295
    Align = alClient
    BevelWidth = 5
    BorderStyle = bsSingle
    Color = clScrollBar
    ParentBackground = False
    TabOrder = 0
    ExplicitWidth = 773
    ExplicitHeight = 285
    object Label1: TLabel
      Left = 230
      Top = 87
      Width = 174
      Height = 18
      Caption = 'Shifoxonaga kelgan vaqti'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 149
      Width = 81
      Height = 18
      Caption = 'Bo'#39'lim nomi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 231
      Top = 151
      Width = 75
      Height = 18
      Caption = 'Shifokorlar'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object SpeedButton1: TSpeedButton
      Left = 362
      Top = 222
      Width = 126
      Height = 22
      Caption = 'Saqlash'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 530
      Top = 222
      Width = 126
      Height = 22
      Caption = 'Chiqish'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton2Click
    end
    object Label4: TLabel
      Left = 15
      Top = 92
      Width = 175
      Height = 18
      Caption = 'Shifoxonaga kelgan sana'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label12: TLabel
      Left = 432
      Top = 105
      Width = 98
      Height = 22
      Caption = 'Hozirgi vaqt'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 432
      Top = 73
      Width = 98
      Height = 22
      Caption = 'Hozirgi vaqt'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label7: TLabel
      Left = 432
      Top = 40
      Width = 114
      Height = 22
      Caption = 'Bugungi sana'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 432
      Top = 137
      Width = 58
      Height = 22
      Caption = 'Label5'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Familiya: TLabeledEdit
      Left = 16
      Top = 39
      Width = 185
      Height = 27
      EditLabel.Width = 59
      EditLabel.Height = 18
      EditLabel.Caption = 'Familiya'
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clNavy
      EditLabel.Font.Height = -16
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object Ismi: TLabeledEdit
      Left = 231
      Top = 40
      Width = 185
      Height = 27
      EditLabel.Width = 28
      EditLabel.Height = 18
      EditLabel.Caption = 'Ismi'
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clNavy
      EditLabel.Font.Height = -16
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object MaskEdit1: TMaskEdit
      Left = 231
      Top = 110
      Width = 105
      Height = 27
      EditMask = '99-99;1;_'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 5
      ParentFont = False
      TabOrder = 2
      Text = '  -  '
    end
    object Bolim_boshliqlari: TComboBox
      Left = 16
      Top = 173
      Width = 185
      Height = 27
      Style = csDropDownList
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnChange = Bolim_boshliqlariChange
    end
    object Shifokorlar: TComboBox
      Left = 231
      Top = 173
      Width = 185
      Height = 27
      Style = csDropDownList
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      OnChange = ShifokorlarChange
    end
    object MaskEdit2: TMaskEdit
      Left = 15
      Top = 116
      Width = 136
      Height = 27
      EditMask = '99-99-9999;1;_'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 10
      ParentFont = False
      TabOrder = 5
      Text = '  -  -    '
    end
    object MonthCalendar1: TMonthCalendar
      Left = 556
      Top = 37
      Width = 225
      Height = 160
      Date = 42872.020503078700000000
      TabOrder = 6
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=E:\Bo' +
      'shladik\Ishdan Kopiya da ishla\Loyiha ishi '#8212' '#1082#1086#1087#1080#1103' '#8212' '#1082#1086#1087#1080#1103'\BAZA\' +
      'Polikilinika.mdb;Mode=Share Deny None;Persist Security Info=Fals' +
      'e;Jet OLEDB:System database="";Jet OLEDB:Registry Path="";Jet OL' +
      'EDB:Database Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Datab' +
      'ase Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB' +
      ':Global Bulk Transactions=1;Jet OLEDB:New Database Password="";J' +
      'et OLEDB:Create System Database=False;Jet OLEDB:Encrypt Database' +
      '=False;Jet OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Co' +
      'mpact Without Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 64
    Top = 32
  end
  object ADOQuery_Bolim_boshliqlari: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Bolim_Boshliqlari')
    Left = 104
    Top = 65528
  end
  object ADOQuery_Shifokorlar: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Shifokorlar')
    Left = 160
    Top = 120
  end
  object ADOQuery_Bemorlar: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Bemorlar_haqida')
    Left = 48
    Top = 112
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 368
    Top = 128
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery_Bemorlar
    Left = 264
    Top = 64
  end
end
