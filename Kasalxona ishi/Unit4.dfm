object Form4: TForm4
  Left = 293
  Top = 165
  BorderStyle = bsDialog
  Caption = 'Qabulxona shifokorining yozuvi'
  ClientHeight = 555
  ClientWidth = 767
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
  object Kundalik: TPanel
    Left = 0
    Top = 0
    Width = 767
    Height = 425
    BevelWidth = 8
    BorderStyle = bsSingle
    Caption = 'Kundalik'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Visible = False
    object RichEdit1: TRichEdit
      Left = 8
      Top = 8
      Width = 747
      Height = 405
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
      ExplicitLeft = 1
      ExplicitTop = 1
      ExplicitWidth = 761
      ExplicitHeight = 419
    end
  end
  object Xotima: TPanel
    Left = 0
    Top = 0
    Width = 767
    Height = 425
    BevelWidth = 8
    BorderStyle = bsSingle
    Caption = 'Xotima'
    TabOrder = 1
    Visible = False
    object RichEdit2: TRichEdit
      Left = 8
      Top = 8
      Width = 747
      Height = 405
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
  end
  object Shikoyatlar: TPanel
    Left = 0
    Top = 0
    Width = 767
    Height = 425
    BevelWidth = 8
    BorderStyle = bsSingle
    Caption = 'Shikoyatlar'
    TabOrder = 2
    Visible = False
    object RichEdit3: TRichEdit
      Left = 8
      Top = 8
      Width = 747
      Height = 405
      Align = alClient
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      Lines.Strings = (
        '')
      ParentFont = False
      TabOrder = 0
      ExplicitLeft = 1
      ExplicitTop = 1
      ExplicitWidth = 761
      ExplicitHeight = 419
    end
  end
  object Qabulxona: TPanel
    Left = 0
    Top = 0
    Width = 767
    Height = 425
    BevelWidth = 8
    BorderStyle = bsSingle
    Caption = 'Qabulxona'
    TabOrder = 3
    Visible = False
    object RichEdit5: TRichEdit
      Left = 8
      Top = 8
      Width = 747
      Height = 405
      Align = alClient
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      Lines.Strings = (
        '')
      ParentFont = False
      TabOrder = 0
    end
  end
  object Patomorfolog: TPanel
    Left = 1
    Top = 0
    Width = 767
    Height = 434
    BevelWidth = 8
    BorderStyle = bsSingle
    TabOrder = 4
    Visible = False
    object GroupBox1: TGroupBox
      Left = 8
      Top = 232
      Width = 747
      Height = 190
      Align = alClient
      Caption = 'Patomorfologik xulosa(diagnoz) '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      ExplicitHeight = 181
      object Kasalxonada_qoyilgan_tashhis: TLabeledEdit
        Left = 0
        Top = 32
        Width = 918
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 347
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '             Asosiy'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 0
      end
      object LabeledEdit1: TLabeledEdit
        Left = 0
        Top = 80
        Width = 918
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 430
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '           Asosiy kasallik asorati'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 1
      end
      object LabeledEdit2: TLabeledEdit
        Left = -1
        Top = 122
        Width = 919
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 418
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '             Yo'#39'ldosh kasalliklar'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 2
      end
      object LabeledEdit3: TLabeledEdit
        Left = 0
        Top = 164
        Width = 353
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 195
        EditLabel.Height = 16
        EditLabel.Caption = '                              Shifokor ismi'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 3
      end
    end
    object Memo1: TRichEdit
      Left = 8
      Top = 8
      Width = 747
      Height = 224
      Align = alTop
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Arial'
      Font.Style = []
      Lines.Strings = (
        '')
      ParentFont = False
      ScrollBars = ssVertical
      TabOrder = 1
      ExplicitTop = 2
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 431
    Width = 767
    Height = 124
    Align = alBottom
    BevelWidth = 7
    BorderStyle = bsSingle
    Color = clWindowFrame
    ParentBackground = False
    TabOrder = 5
    object GroupBox2: TGroupBox
      Left = 9
      Top = 10
      Width = 749
      Height = 80
      Caption = 
        '                                             Kiritilishi kerak b' +
        'o'#39'lgan bo'#39'limni tanlang'
      Ctl3D = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
      object RadioButton1: TRadioButton
        Left = 44
        Top = 24
        Width = 113
        Height = 17
        Caption = 'Kundalik'
        TabOrder = 0
        OnClick = RadioButton1Click
      end
      object RadioButton2: TRadioButton
        Left = 44
        Top = 47
        Width = 137
        Height = 17
        Caption = 'Patologoanatom'
        TabOrder = 1
        OnClick = RadioButton2Click
      end
      object RadioButton3: TRadioButton
        Left = 213
        Top = 24
        Width = 137
        Height = 17
        Caption = 'Qabulxona'
        TabOrder = 2
        OnClick = RadioButton3Click
      end
      object RadioButton4: TRadioButton
        Left = 213
        Top = 47
        Width = 216
        Height = 17
        Caption = 'Shikoyatlar. Kasallik tarixi'
        TabOrder = 3
        OnClick = RadioButton4Click
      end
      object RadioButton5: TRadioButton
        Left = 452
        Top = 24
        Width = 137
        Height = 17
        Caption = 'Xotima'
        TabOrder = 4
        OnClick = RadioButton5Click
      end
    end
  end
end
