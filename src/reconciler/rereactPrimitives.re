open Rereact;

let defaultLayout = LayoutSupport.defaultStyle;

let defaultStyle: style = {backgroundColor: None};

let defaultProps: Rereact.props = {
  id: None,
  value: None,
  title: None,
  disabled: None,
  placeholder: None,
  src: None,
  onClick: None,
  onChangeText: None,
  layout: defaultLayout,
  style: defaultStyle
};

let createNativeElement =
    (
      nativeElement: primitive,
      ~id: option(string)=?,
      ~value: option(string)=?,
      ~title: option(string)=?,
      ~onClick: option(unit => unit)=?,
      ~layout=defaultLayout,
      ~style=defaultStyle,
      ~children: list(reactElement),
      _: unit
    ) =>
  Nested(nativeElement, {...defaultProps, id, value, onClick, layout, style, title}, children);

let view = createNativeElement(View);

let text = createNativeElement(Text);

let button = createNativeElement(Button);