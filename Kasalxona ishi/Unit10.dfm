object Labaratoriya_ishi: TLabaratoriya_ishi
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Labaratoriya_ishi'
  ClientHeight = 517
  ClientWidth = 419
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
    Width = 419
    Height = 81
    Align = alTop
    BevelWidth = 5
    BorderWidth = 10
    BorderStyle = bsSingle
    Color = clSilver
    ParentBackground = False
    TabOrder = 0
    object Label1: TLabel
      Left = 34
      Top = 16
      Width = 147
      Height = 18
      Caption = 'Murojat qilingan sana'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object SpeedButton1: TSpeedButton
      Left = 285
      Top = 32
      Width = 105
      Height = 25
      Caption = 'Qayta yuklash'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object ComboBox1: TComboBox
      Left = 34
      Top = 40
      Width = 145
      Height = 26
      Style = csDropDownList
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnChange = ComboBox1Change
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 81
    Width = 419
    Height = 436
    Align = alClient
    BevelWidth = 10
    BorderStyle = bsSingle
    Color = clMedGray
    ParentBackground = False
    TabOrder = 1
    object Label3: TLabel
      Left = 64
      Top = 13
      Width = 230
      Height = 23
      Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090#1099' '#1080#1089#1089#1083#1077#1076#1086#1074#1072#1085#1080#1081
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHotLight
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 63
      Top = 142
      Width = 231
      Height = 23
      Caption = #1056#1045#1060#1045#1056#1045#1053#1058#1053#1067#1045' '#1047#1053#1040#1063#1045#1053#1048#1071
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHotLight
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 63
      Top = 79
      Width = 107
      Height = 23
      Caption = #1055#1040#1056#1040#1052#1045#1058#1056#1067
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHotLight
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 65
      Top = 320
      Width = 99
      Height = 23
      Caption = #1056#1045#1047#1059#1051#1068#1058#1040#1058
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHotLight
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 63
      Top = 42
      Width = 274
      Height = 31
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object Memo1: TMemo
      Left = 63
      Top = 176
      Width = 274
      Height = 129
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      Lines.Strings = (
        '')
      ParentFont = False
      ScrollBars = ssVertical
      TabOrder = 1
    end
    object ComboBox2: TComboBox
      Left = 63
      Top = 108
      Width = 274
      Height = 31
      Style = csDropDownList
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnChange = ComboBox2Change
    end
    object Edit2: TEdit
      Left = 64
      Top = 353
      Width = 273
      Height = 31
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
    end
  end
  object ADOQuery_Bemor_Analiz: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Bemor_Analiz')
    Left = 240
    Top = 16
  end
  object ADOQuery_Bemor_murojat: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Bemor_murojat')
    Left = 320
    Top = 56
  end
  object ADOQuery_Analiz_nomlari: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from analiz_nomlari')
    Left = 256
    Top = 64
  end
  object ADOQuery_Analiz_turi: TADOQuery
    Active = True
    Connection = Form_Shifokor.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *'
      'from Analiz_turi')
    Left = 192
  end
end
