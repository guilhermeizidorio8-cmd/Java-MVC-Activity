package Control;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JOptionPane;

import Model.Musica;
import View.FrameCadastro;
import View.FrameInicial;


public class ControleFrameCadastro {
	
	FrameCadastro frameCadastro;
	
	public ControleFrameCadastro(FrameCadastro frameCadastro) {
		this.frameCadastro = frameCadastro;
		addEventos();
	}
	private void addEventos() {
		frameCadastro.getBottonCadastrar().addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == frameCadastro.getBottonCadastrar()) {
			cadastrarMusica();
		}
	}
	
	private void cadastrarMusica() {
		String artista = frameCadastro.getTextArtista().getText();
		String nome = frameCadastro.getTextNome().getText();
		String ritmo = frameCadastro.getTextRitmo().getText();
		String anoGravacao = frameCadastro.getTextAnoGravacao().getText();
		boolean original;
		String album = frameCadastro.getTextAlbum().getText();
		new
	}
}
