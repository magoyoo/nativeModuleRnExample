import { NativeModules } from 'react-native';

type MagoRnKakaoType = {
  multiply(a: number, b: number): Promise<number>;
};

const { MagoRnKakao } = NativeModules;

export default MagoRnKakao as MagoRnKakaoType;
