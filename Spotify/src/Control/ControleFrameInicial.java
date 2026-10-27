package Control;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import Model.Musica;
import View.FrameCadastro;
import View.FrameInicial;



public class ControleFrameInicial implements ActionListener{

	public static ArrayList<Musica> musicas = new ArrayList<Musica>();
	FrameInicial frame;
	FrameCadastro  frameCadastro;
	ControleFrameCadastro controleCadastro;
	
	public static void main(String[] arg) {
		new ControleFrameInicial();
	}
	
	public ControleFrameInicial() {
		frame = new FrameInicial();
		addEventos();
	}
	private void addEventos() {
		frame.getMenuItemCadastrarArtista().addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == frame.getMenuItemCadastrarArtista()) {
			setaTelaCadastroMusica();
		}
	}
	
	public void setaTelaCadastroMusica() {
		if(frameCadastro == null) {
			frameCadastro = new FrameCadastro();
		}
		if(controleCadastro == null) {
			controleCadastro = new ControleFrameCadastro(frameCadastro);
		}
		frameCadastro.setVisible(true);
	}

	
}
