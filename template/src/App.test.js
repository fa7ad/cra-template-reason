import React from 'react';
import { render, screen } from '@testing-library/react';
import { make as App } from './App.bs';

test('renders learn reason-react link', () => {
  render(<App />);
  const linkElement = screen.getByText(/learn reason/i);
  expect(linkElement).toBeInTheDocument();
});
