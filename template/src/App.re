let logo: string = [%bs.raw {|require('./logo.svg')|}];
[%bs.raw {|require('./App.css')|}];

[@react.component]
let make = () => {
  <div className="App">
    <header className="App-header">
      <img src={logo} className="App-logo" alt="logo" />
      <p>
        {React.string("Edit ")}
        <code>{React.string("src/App.re")}</code>
        {React.string("and save to reload.")}
      </p>
      <a
        className="App-link"
        href="https://reasonml.github.io/reason-react/en/"
        target="_blank"
        rel="noopener noreferrer"
      >
        {React.string("Learn ReasonReact")}
      </a>
    </header>
  </div>;
};
