module com.example.brunocarliniado1 {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.brunocarliniado1 to javafx.fxml;
    exports com.example.brunocarliniado1;
}