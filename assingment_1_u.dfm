object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 407
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object pnlHolder: TPanel
    Left = 0
    Top = 0
    Width = 635
    Height = 41
    Align = alTop
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clTeal
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object Label1: TLabel
      Left = 89
      Top = 13
      Width = 105
      Height = 14
      Caption = 'Disappearing speed'
      Color = clBtnFace
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Label2: TLabel
      Left = 242
      Top = 13
      Width = 15
      Height = 14
      Caption = 'ms'
      Color = clBtnFace
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Label3: TLabel
      Left = 416
      Top = 13
      Width = 71
      Height = 13
      Caption = 'FINAL SCORE'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lblPerc: TLabel
      Left = 493
      Top = 3
      Width = 44
      Height = 29
      Caption = '0%'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -24
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object lblEnd: TLabel
      Left = 288
      Top = 8
      Width = 86
      Height = 19
      Caption = 'Time'#39's UP!'
    end
    object edtDelay: TEdit
      Left = 200
      Top = 9
      Width = 33
      Height = 22
      Color = clHighlightText
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      Text = '200'
    end
  end
  object btnStart: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Go!'
    TabOrder = 0
    OnClick = btnStartClick
  end
  object pnlMain: TPanel
    Left = 0
    Top = 39
    Width = 635
    Height = 366
    TabOrder = 2
    object lstResults: TListBox
      Left = 1
      Top = 218
      Width = 633
      Height = 147
      Align = alBottom
      ItemHeight = 13
      TabOrder = 0
      TabWidth = 30
    end
    object pnlList: TPanel
      Left = 1
      Top = 194
      Width = 633
      Height = 24
      Align = alBottom
      TabOrder = 1
    end
    object pgbTime: TProgressBar
      Left = 616
      Top = 1
      Width = 18
      Height = 193
      Align = alRight
      Orientation = pbVertical
      TabOrder = 2
    end
    object pnlNum1: TPanel
      Left = 336
      Top = 120
      Width = 60
      Height = 60
      ParentBackground = False
      TabOrder = 3
      OnClick = pnlNum1Click
    end
    object pnlNum2: TPanel
      Left = 72
      Top = 64
      Width = 60
      Height = 60
      TabOrder = 4
    end
    object pnlNum3: TPanel
      Left = 200
      Top = 16
      Width = 60
      Height = 60
      TabOrder = 5
    end
  end
  object tmrDelay: TTimer
    Interval = 0
    OnTimer = tmrDelayTimer
    Left = 544
    Top = 57
  end
end
