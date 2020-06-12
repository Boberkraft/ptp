
RSpec::Matchers.define :have_return_code do |expected|
  match do |actual|
    actual % expected == 0
  end
end

`./../program/series #{params}`

shared_examples 'returns correct action name' do
  expect(subject).match self.class.top_level_description
end


describe 'Artihmetic Series' do
  subject { program(example.description) }

  context 'passed args create arithmetic series' do
    before do
      include_examples 'returns correct action name'
      is_expected.to have_return_code(0)
    end

    describe '1 2 3 4 5 6' do
      it { is_expected.to match('[7]') }
    end

    describe '1 2' do
      it { is_expected.to match('[3]') }
    end

    describe '-1 0' do
      it { is_expected.to match('[1]') }
    end

    describe '6 7' do
      it { is_expected.to match('[8]') }
    end

    describe '-3 -2 -1' do
      it { is_expected.to match('[0]') }
    end

    describe '-99 -98' do
      it { is_expected.to match('[-97]') }
    end
  end
end