[%bs.raw {|require("./index.css")|}];

module ServiceWorker {
  [@bs.module "./serviceWorker"]
  external unregister : (unit => unit) = "unregister";
  [@bs.module "./serviceWorker"]
  external register : (unit => unit) = "register";
}

module StrictMode {
  [@bs.module "react"] [@react.component]
  external make: (~children: React.element=?) => React.element = "StrictMode";
};


[@react.component]
let make = () => <StrictMode> <App /> </StrictMode>;

/*
  If you want your app to work offline and load faster, you can change
  unregister() to register() below. Note this comes with some pitfalls.
  Learn more about service workers: https://bit.ly/CRA-PWA
 */

ServiceWorker.unregister();
