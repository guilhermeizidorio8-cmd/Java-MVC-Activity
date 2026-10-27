package View;

import javax.swing.*;
import java.awt.*;

public class FrameCadastro extends JPanel {
	
	private static final long serialVersionUID = 1L;
	private JLabel labelArtista;
	private JLabel labelNome;
	private JLabel labelRitmo;
	private JLabel labelAnoGravacao;
	private JLabel labelOriginal;
	private JLabel labelAlbum;
	
	private JTextField textArtista;
	private JTextField textNome;
	private JTextField textRitmo;
	private JTextField textAnoGravacao;
	private JTextField textAlbum;
	
	private JCheckBox checkOriginal;
	private JButton buttonCadastrar;
	
	
	
	public static void main(String [] args) {
		new FrameCadastro();
	}
	
	public FrameCadastro() {
		this.setLayout(new GridLayout(1,13,10,8)); // (Colunas, linhas, espaçamento vertical, espaçamenro horizontal
		this.add(getLabelArtista());
		this.add(getTextArtista());
		
		this.add(getLabelNome());
		this.add(getTextNome());
		
		this.add(getLabelRitmo());
		this.add(getTextRitmo());
		
		this.add(getLabelAnoGravacao());
		this.add(getTextAnoGravacao());
		
		this.add(getLabelOriginal());
		this.add(getCheckOriginal());
		
		this.add(getLabelAlbum());	
		this.add(getTextAlbum());
		
		this.add(getBottonCadastrar(), BorderLayout.CENTER);
	}

	public JLabel getLabelArtista() {
		if(labelArtista == null) {
			labelArtista = new JLabel("Artista:");
		}
		return labelArtista;
	}

	public JLabel getLabelNome() {
		if(labelNome == null) {
			labelNome = new JLabel("Nome da Musica:");
		}
		return labelNome;
	}

	public JLabel getLabelRitmo() {
		if(labelRitmo == null) {
			labelRitmo= new JLabel("Ritmo:");
		}
		return labelRitmo;
	}

	public JLabel getLabelAnoGravacao() {
		if(labelAnoGravacao == null) {
			labelAnoGravacao = new JLabel("Artista:");
		}
		return labelAnoGravacao;
	}

	public JLabel getLabelOriginal() {
		if(labelOriginal == null) {
			labelOriginal = new JLabel("Original?");
		}
		return labelOriginal;
	}

	public JLabel getLabelAlbum() {
		if(labelAlbum == null) {
			labelAlbum = new JLabel("Album da Musica:");
		}
		return labelAlbum;
	}

	public JTextField getTextArtista() {
		if(textArtista == null) {
			textArtista = new JTextField();
		}
		return textArtista;
	}

	public JTextField getTextNome() {
		if(textNome == null) {
			textNome = new JTextField();
		}
		return textNome;
	}

	public JTextField getTextRitmo() {
		if(textRitmo == null) {
			textRitmo = new JTextField();
		}
		return textRitmo;
	}

	public JTextField getTextAnoGravacao() {
		if(textAnoGravacao == null) {
			textAnoGravacao = new JTextField();
		}
		return textAnoGravacao;
	}

	public JTextField getTextAlbum() {
		if(textAlbum == null) {
			textAlbum = new JTextField();
		}
		return textAlbum;
	}

	public JCheckBox getCheckOriginal() {
		if(checkOriginal == null) {
			checkOriginal = new JCheckBox();
		}
		return checkOriginal;
	}

	public JButton getBottonCadastrar() {
		if(buttonCadastrar == null) {
			buttonCadastrar = new JButton("Cadastrar");
		}
		return buttonCadastrar;
	}
	
}
